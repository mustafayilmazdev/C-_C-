<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication6.WebForm2" %>

<%@ Register assembly="System.Web.DataVisualization, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35" namespace="System.Web.UI.DataVisualization.Charting" tagprefix="asp" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Kayıt</title>
    <link href="css/bootstrap.min.css" rel="stylesheet" />
    <link href="css/stillerim.css" rel="stylesheet" />
</head>
<body  style="background:Brown ; color: brown;" >

    <div class=" container">


         <form id="form1" runat="server">
    
        <div class="jumbotron "> 
            <div class="row  mb-3 " >                

                    <div class="col-12 text-center" style="font-size:40px;">
                        <asp:Label ID="Label1" runat="server" Text="Kayıt Formu " Font-Bold="True"></asp:Label>

                    </div>         
            
                
            </div>
            <div>
            <div class="row mt-1  ">

                <div class="col-6  bg-warning p-4 border-right-0 " style="border-style:solid; border-width:3px !important">
                    <div class="row align-items-center">
                    <div class="col-5  " style="font-size:25px;">
                        <asp:Label ID="Label2" runat="server" Text="Öğrenci Ad: "></asp:Label>

                    </div>
                    
                    <div class="col-2 ">
                        <asp:TextBox ID="TextBox1"  AutoCompleteType="Disabled" runat="server" placeholder="Öğrenci Adını Giriniz"></asp:TextBox>
                    </div>
               
                
                </div>
                      <div class="row align-items-center ">
                    <div class="col-5" style="font-size:25px;">
                        <asp:Label ID="Label3" runat="server" Text="Öğrenci Soyad: "></asp:Label>

                    </div>
                    
                    <div class="col-2 ">
                        <asp:TextBox ID="TextBox2"  AutoCompleteType="Disabled" runat="server" placeholder="Öğrenci Soyadını Giriniz"></asp:TextBox>
                    </div>
               
                
                </div>
                      <div class="row align-items-center">
                    <div class="col-5" style="font-size:25px;">
                        <asp:Label ID="Label4" runat="server" Text="Öğrenci Sınıfı: "></asp:Label>

                    </div>
                    
                    <div class="col-2 ">
                        <asp:DropDownList ID="DropDownList1" runat="server" Width="185px">
                            <asp:ListItem>A1</asp:ListItem>
                            <asp:ListItem>A2</asp:ListItem>
                            <asp:ListItem>B1</asp:ListItem>
                            <asp:ListItem>B2</asp:ListItem>
                            <asp:ListItem>C1</asp:ListItem>
                            <asp:ListItem>C2</asp:ListItem>
                        </asp:DropDownList>
                    </div>
               
                
                </div>


                        <div class="row align-items-center">
                    <div class="col-5" style="font-size:25px;">
                        <asp:Label ID="Label6" runat="server" Text="İletişim No: "></asp:Label>

                    </div>
                    
                    <div class="col-2 ">
                        <asp:TextBox ID="TextBox4"  AutoCompleteType="Disabled" runat="server" placeholder="İletişim Numarasını Giriniz"></asp:TextBox>
                    </div>
               
                
                </div>

                </div>

                <div class="col bg-warning rounded p-3 "  style="border-style:solid; border-width:3px !important"  >
                    
							
								<div class="row  p-1">
								<div class="col-12 kenarlik rounded bg-light ">
									<div class="row justify-content-center p-1">
										
										<div class="col-12 p-1 bg-dark text-white rounded border border-primary">
											<h2 style="color: green;  font-size:18px;"><span style="color:white;"> A1-A2 Kurs fiyatı: </span> ₺10.000 <span style="text-decoration:line-through; color:red; font-size: 16px">  ₺12.000</span></h2>
										</div>

                                        <div class="col-12 p-1 bg-dark text-white rounded border border-primary">
											<h2 style="color: green;  font-size:18px;"><span style="color:white;"> B1-B2 Kurs fiyatı: </span> ₺7.000 <span style="text-decoration:line-through; color:red; font-size: 16px">  ₺10.000</span></h2>
										</div>

                                        <div class="col-12 p-1 bg-dark text-white rounded border border-primary">
											<h2 style="color: green;  font-size:18px;"><span style="color:white;"> C1-C2 Kurs fiyatı: </span> ₺5.000 <span style="text-decoration:line-through; color:red; font-size: 16px">  ₺7.000</span></h2>
										</div>
										
									</div>
								</div>	
							</div>
						
					

                </div>

                 </div>                  
           


            <div class="row mt-3 text-center align-items-center ">

                   
                    
                    <div class="col-12 p-3 " style="font-size:20px;">
                        <asp:Button ID="Button1" runat="server" Text="Kayıt Ekle" BackColor="brown" BorderColor="brown" Font-Bold="False" Font-Names="Bahnschrift Light" ForeColor="White" OnClick="Button1_Click" />
                    </div>
                </div> 

            <div class="row text-center mt-5">
                  <div class="col-12 ;" style="font-size:30px;">
                        <asp:Label ID="Label5" runat="server" Text="Kayıtlı Öğrenci Listesi " Font-Bold="True"></asp:Label>

                    </div>
                <div class="col-12 mb-3">
                    AŞAĞIDA KAYITLI ÖĞRENCİ BİLGİLERİ, KAYIT YAPAN YÖNETİCİNİN BİLGİLERİ VE KAYIT TARİHİ LİSTELENMİŞTİR
                </div>   
            </div>


            <div class="row text-center "  >

                <div class="col-12 p-1">
                    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="SqlDataSource2" Width="1038px" CellPadding="4" ForeColor="#333333" GridLines="None">
                        <AlternatingRowStyle BackColor="White" />
                        <Columns>
                            <asp:BoundField DataField="ogrNo" HeaderText="Öğrenci No" InsertVisible="False" ReadOnly="True" SortExpression="ogrNo" />
                            <asp:BoundField DataField="ogrAd" HeaderText="Öğrenci Ad" SortExpression="ogrAd" />
                            <asp:BoundField DataField="ogrSoyad" HeaderText="Öğrenci Soyad" SortExpression="ogrSoyad" />
                            <asp:BoundField DataField="iletisimNo" HeaderText="Öğrenci İletişim" SortExpression="iletisimNo" />
                            <asp:BoundField DataField="ogrSinif" HeaderText="Öğrenci Sınıf" SortExpression="ogrSinif" />
                            <asp:BoundField DataField="yoneticiNo" HeaderText="Yönetici No" InsertVisible="False" ReadOnly="True" SortExpression="yoneticiNo" />
                            <asp:BoundField DataField="yoneticiAd" HeaderText="Yönetici Ad" SortExpression="yoneticiAd" />
                            <asp:BoundField DataField="yoneticiSoyad" HeaderText="Yönetici Soyad" SortExpression="yoneticiSoyad" />
                            <asp:BoundField DataField="kayitTarihi" HeaderText="Kayıt Tarihi" SortExpression="kayitTarihi" />
                        </Columns>
                        <EditRowStyle BackColor="#2461BF" />
                        <FooterStyle BackColor="#507CD1" ForeColor="White" Font-Bold="True" />
                        <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
                        <PagerStyle ForeColor="White" HorizontalAlign="Center" BackColor="#2461BF" />
                        <RowStyle BackColor="#EFF3FB" />
                        <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#333333" />
                        <SortedAscendingCellStyle BackColor="#F5F7FB" />
                        <SortedAscendingHeaderStyle BackColor="#6D95E1" />
                        <SortedDescendingCellStyle BackColor="#E9EBEF" />
                        <SortedDescendingHeaderStyle BackColor="#4870BE" />
                    </asp:GridView>

                    <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="select o.ogrNo,ogrAd,ogrSoyad,iletisimNo,ogrSinif,y.yoneticiNo,y.yoneticiAd,y.yoneticiSoyad,kayitTarihi from ogrenci o, kayit k, yonetici y where o.ogrNo=k.ogrNo and k.yoneticiNo=y.yoneticiNo"></asp:SqlDataSource>

                    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="SELECT * FROM ogrenci"></asp:SqlDataSource>

                </div>

            </div>

            <div class="row mt-3">

                <div class="col">

                    <asp:Button ID="Button2" runat="server" Text="Geri" OnClick="Button2_Click" />
                </div>
            </div>


            </div>
    </div>
       
    </form>

    </div>


   
</body>
</html>
