<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm4.aspx.cs" Inherits="WebApplication6.WebForm4" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Ödeme Listele</title>

    <link href="css/bootstrap.min.css" rel="stylesheet" />
    <link href="css/stillerim.css" rel="stylesheet" />
</head>
<body  style="background:Brown ; color: brown;" >
   <div class="container" > 
    <form id="form1" runat="server">
    
        <div class="jumbotron">             
            
                    <div class="row text-center mb-3 " >                
                                <div class="col-12 ;" style="font-size:40px;">
                                        <asp:Label ID="Label1" runat="server" Text="Ödeme Listesi " Font-Bold="True"></asp:Label>
                                 </div>  
                                <div class="col-12 bg-dark text-white" style="font-size:15px; font-weight:bold; ">
                                    <p>
                                    AŞAĞIDA TÜM ÖĞRENCİLERİN ÖDEME DURUMLARI LİSTELENMİŞTİR VE ALTINDA ÖDEMELERİN TOPLAMI, TAHSİL EDİLECEK BORÇLARIN TOPLAMI GÖSTERİLMİŞTİR</p>
                                </div>
                    </div>


            <div class="row text-center">

                <div class="col-12">
                    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" CellPadding="4" DataSourceID="SqlDataSource3" ForeColor="Black" GridLines="Horizontal" Width="1038px" BackColor="White" BorderColor="#CCCCCC" BorderStyle="None" BorderWidth="1px">
                        <Columns>
                            <asp:BoundField DataField="ogrNo" HeaderText="Öğrenci No" SortExpression="ogrNo" />
                            <asp:BoundField DataField="ogrAd" HeaderText="Öğrenci Ad" SortExpression="ogrAd" />
                            <asp:BoundField DataField="ogrSoyad" HeaderText="Öğrenci Soyad" SortExpression="ogrSoyad" />
                            <asp:BoundField DataField="iletisimNo" HeaderText="Öğrenci İletişim" SortExpression="iletisimNo" />
                            <asp:BoundField DataField="ogrSinif" HeaderText="Öğrenci Sınıf" SortExpression="ogrSinif" />
                            <asp:BoundField DataField="toplamOdenen" HeaderText="Toplam Ödeme" SortExpression="toplamOdenen" />
                            <asp:BoundField DataField="kalanUcret" HeaderText="Kalan Borç" SortExpression="kalanUcret" />
                        </Columns>
                        <FooterStyle BackColor="#CCCC99" ForeColor="Black" />
                        <HeaderStyle BackColor="#333333" Font-Bold="True" ForeColor="White" />
                        <PagerStyle BackColor="White" ForeColor="Black" HorizontalAlign="Right" />
                        <SelectedRowStyle BackColor="#CC3333" Font-Bold="True" ForeColor="White" />
                        <SortedAscendingCellStyle BackColor="#F7F7F7" />
                        <SortedAscendingHeaderStyle BackColor="#4B4B4B" />
                        <SortedDescendingCellStyle BackColor="#E5E5E5" />
                        <SortedDescendingHeaderStyle BackColor="#242121" />
                    </asp:GridView>


                    <asp:SqlDataSource ID="SqlDataSource3" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select t.ogrNo,ogrAd,ogrSoyad,iletisimNo,ogrSinif,toplamOdenen,kalanUcret from toplamOdeme t,ogrenci o where t.ogrNo=o.ogrNo"></asp:SqlDataSource>


                    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select  distinct odemeID,muhasebeNo,o.ogrNo,ogrAd,ogrSoyad,ogrSinif,odemeSekli,odenenUcret,kalanUcret from odeme o, ogrenci og where o.ogrNo=og.ogrNo and o.ogrNo=@ogrNo">

                        <SelectParameters>
                                <asp:ControlParameter ControlID="Label3" DefaultValue="1" Name="ogrNo" PropertyName="Text" Type="Int32" />
                            </SelectParameters>
                    </asp:SqlDataSource>


                </div>

            </div>

                <div class="row  text-left" style="font-size: 25px; font-weight:bold">

                <div class="col-12">
                    <asp:DataList ID="DataList1" runat="server" DataSourceID="SqlDataSource5">
                        <ItemTemplate>
                             <asp:Label ID="Label7" runat="server" Text='Genel Toplam:' />
                            <asp:Label ID="Column1Label" runat="server" Text='<%# Eval("Column1") %>' />
                            <br />
                            <br />
                        </ItemTemplate>
                    </asp:DataList>
                    <asp:SqlDataSource ID="SqlDataSource5" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select sum(toplamOdenen)  from toplamOdeme"></asp:SqlDataSource>
                </div>
                <div class="col-12">
                    <asp:DataList ID="DataList2" runat="server" DataSourceID="SqlDataSource6">
                        <ItemTemplate>
                           <asp:Label ID="Label7" runat="server"  Text='Tahsil Edilecek Toplam:' />
                            <asp:Label ID="Column1Label" runat="server" Text='<%# Eval("Column1") %>' />
                            <br />
<br />
                        </ItemTemplate>
                    </asp:DataList>
                    <asp:SqlDataSource ID="SqlDataSource6" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select sum(kalanUcret) from toplamOdeme"></asp:SqlDataSource>
                </div>
            </div>



            <div class="row text-center">
                 <div class="col-12 ;" style="font-size:40px;">
                                        <asp:Label ID="Label6" runat="server" Text="Ödeme Grafik " Font-Bold="True"></asp:Label>
                                 </div>  

                 <div class="col-12 bg-dark text-white" style="font-size:15px; font-weight:bold; ">
                    AŞAĞIDA ÖĞRENCİLERİN ÖDEMELERİNİN NE KADARINI TAMAMLADIĞI GRAFİKSEL OLARAK GÖSTERİLMİŞTİR.

                </div>
                <div class="col-12">
                    <asp:Chart ID="Chart1" runat="server" DataSourceID="SqlDataSource4" Width="1038px" Palette="None">
                        <Series>
                            <asp:Series Name="Series1" XValueMember="ogrNo" YValueMembers="toplamOdenen" ChartType="StackedColumn"></asp:Series>
                        </Series>
                        <ChartAreas>
                            <asp:ChartArea Name="ChartArea1"></asp:ChartArea>
                        </ChartAreas>
                    </asp:Chart>
                    <asp:SqlDataSource ID="SqlDataSource4" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="SELECT [ogrNo], [toplamOdenen] FROM [toplamOdeme]"></asp:SqlDataSource>
                </div>
            </div>


        





            <div class="row bg-dark border border-primary rounded mt-3" style="border-style:solid; border-width:5px !important">
                
                <div class="col-12">
            

            <div class="row text-center">
                  <div class="col-12 ;" style="font-size:40px;">
                                        <asp:Label ID="Label5" runat="server" Text="Ödeme Detay Listesi " Font-Bold="True"></asp:Label>
                                 </div>  
                <div class="col-12 bg-dark text-white" style="font-size:15px; font-weight:bold; ">
                    AŞAĞIDAN ÖĞRENCİ NUMARASI SEÇEREK ÖĞRENCİNİN ÖDEME KAYITLARIYLA İLGİLİ DETAYLARI GÖREBİLİRSİNİZ

                </div>

            </div>

                    <div class="row mt-2 ">
                        <div class="col">
                            <div class="row align-items-center">
                                <div class="col-3">
                                    <asp:Label ID="Label2" runat="server" Text="Öğrenci No:" Font-Size="25pt"></asp:Label>
                                </div>
                                <div class="col-3 p-2">
                                    <asp:DropDownList ID="DropDownList1" runat="server" DataSourceID="SqlDataSource3" DataTextField="ogrNo" DataValueField="ogrNo" Width="180px"></asp:DropDownList>
                                </div>
                                <div class="col-3">
                                    <asp:Button ID="Button3" runat="server" Text="Görüntüle" BackColor="brown" BorderColor="brown" Font-Bold="False" Font-Names="Bahnschrift Light" ForeColor="White"  OnClick="Button1_Click" />
                                </div>
                            </div>

                            
                        </div>

                  

                    </div>

                    <div class="row mt-5" style="background:white;">

                        <div class="col-1 text-right">
                            <asp:Label ID="Label3" runat="server" Text="1" Font-Size="13pt" Font-Bold="True"></asp:Label>
                        </div>

                        <div class="col">
                            <asp:Label ID="Label4" runat="server" Text="Numaralı Öğrencinin Ödeme Detayları Listeleniyor." Font-Size="13pt"  Font-Bold="True"></asp:Label>
                        </div>
                    </div>

                <div class="row mb-2 text-center" style="font-size:15px;">
                    <div class="col-12">
                        <asp:GridView ID="GridView2" runat="server" AutoGenerateColumns="False" CellPadding="4" DataKeyNames="odemeID" DataSourceID="SqlDataSource2" Width="1038px" ForeColor="#333333" GridLines="None">
                            <AlternatingRowStyle BackColor="White" ForeColor="#284775" />
                            <Columns>
                                <asp:BoundField DataField="odemeID" HeaderText="Ödeme No" InsertVisible="False" ReadOnly="True" SortExpression="odemeID" />
                                <asp:BoundField DataField="ogrNo" HeaderText="Öğrenci No" SortExpression="ogrNo" />
                                <asp:BoundField DataField="ogrAd" HeaderText="Öğrenci Ad" SortExpression="ogrAd" />
                                <asp:BoundField DataField="ogrSoyad" HeaderText="Öğrenci Soyad" SortExpression="ogrSoyad" />
                                <asp:BoundField DataField="ogrSinif" HeaderText="Öğrenci Sınıf" SortExpression="ogrSinif" />
                                <asp:BoundField DataField="odemeSekli" HeaderText="Ödeme Şekli" SortExpression="odemeSekli" />
                                <asp:BoundField DataField="odenenUcret" HeaderText="Ödenen Ücret" SortExpression="odenenUcret" />
                                <asp:BoundField DataField="kalanUcret" HeaderText="Kalan Ücret" SortExpression="kalanUcret" />
                                <asp:BoundField DataField="muhasebeNo" HeaderText="Muhasebe No" SortExpression="muhasebeNo" />
                                <asp:BoundField DataField="muhasabeAd" HeaderText="Muhasebeci Adı" SortExpression="muhasabeAd" />
                                <asp:BoundField DataField="muhasebeSoyad" HeaderText="Muhasebeci Soyadı" SortExpression="muhasebeSoyad" />
                                <asp:BoundField DataField="islemTarihi" HeaderText="İşlem Tarihi" SortExpression="islemTarihi" />
                            </Columns>
                            <EditRowStyle BackColor="#999999" />
                            <FooterStyle BackColor="#5D7B9D" ForeColor="White" Font-Bold="True" />
                            <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
                            <PagerStyle BackColor="#284775" ForeColor="White" HorizontalAlign="Center" />
                            <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
                            <SelectedRowStyle BackColor="#E2DED6" Font-Bold="True" ForeColor="#333333" />
                            <SortedAscendingCellStyle BackColor="#E9E7E2" />
                            <SortedAscendingHeaderStyle BackColor="#506C8C" />
                            <SortedDescendingCellStyle BackColor="#FFFDF8" />
                            <SortedDescendingHeaderStyle BackColor="#6F8DAE" />
                        </asp:GridView>
                        <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select  distinct odemeID,o.ogrNo,ogrAd,ogrSoyad,ogrSinif,odemeSekli,odenenUcret,kalanUcret,muhasebeNo,muhasabeAd,muhasebeSoyad,islemTarihi  from odeme o, ogrenci og,muhasebe m where o.ogrNo=og.ogrNo and o.muhasebeNo=m.muhasebeID and o.ogrNo=@ogrNo">
                            <SelectParameters>
                                <asp:ControlParameter ControlID="Label3" DefaultValue="1 " Name="ogrNo" PropertyName="Text" Type="Int32" />
                            </SelectParameters>
                        </asp:SqlDataSource>
                    </div>
                </div>
                

            
       
               </div>     
           </div>

            <div class="row mt-3">
                <div class="col">
                    <asp:Button ID="Button2" runat="server" Text="Geri" OnClick="Button2_Click" />
                </div>
            </div>

        </div>
    
    </form>
       </div>
</body>
</html>
