<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm3.aspx.cs" Inherits="WebApplication6.WebForm3" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Ödeme</title>
     <link href="css/bootstrap.min.css" rel="stylesheet" />
    <link href="css/stillerim.css" rel="stylesheet" />
</head>
<body  style="background:Brown ; color: brown;" >
   <div class="container " >
     <form id="form1" runat="server">
    
        <div class="jumbotron"> 
            <div class="row text-center mb-3 " >                

                    <div class="col-5 ;" style="font-size:40px;">
                        <asp:Label ID="Label1" runat="server" Text="Ödeme Formu " Font-Bold="True"></asp:Label>
                    </div>                   
            </div>

            <div class="row mt-1 align-items-start  ">
                
                <div class="col" >
                                <div class="row align-items-center">
                                    <div class="col-5" style="font-size:25px;">
                                    <asp:Label ID="Label2" runat="server" Text="Öğrenci No: "></asp:Label>
                                </div>                    
                                <div class="col-2  ">
                                   
                                    <asp:DropDownList ID="DropDownList2" runat="server" DataSourceID="SqlDataSource2" DataTextField="ogrNo" DataValueField="ogrNo" Width="180px"></asp:DropDownList>
                                    <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="SELECT [ogrNo], [ogrAd], [ogrSoyad] FROM [ogrenci]"></asp:SqlDataSource>
                                </div>
                                </div>
            
                                <div class="row mt-1 align-items-center ">

                                    <div class="col-5" style="font-size:25px;">
                                        <asp:Label ID="Label3" runat="server" Text="Ödeme Şekli: "></asp:Label>
                                    </div>                    
                                    <div class="col-2 ">
                                       
                                        <asp:DropDownList ID="DropDownList1" runat="server" Width="180px">
                                            <asp:ListItem>Nakit</asp:ListItem>
                                            <asp:ListItem>Kredi Kartı</asp:ListItem>
                                        </asp:DropDownList>
                                    </div>
                                </div>
                             
                                <div class="row mt-1 align-items-center ">

                                        <div class="col-5" style="font-size:25px;">
                                            <asp:Label ID="Label4" runat="server" Text="Ödenen Ücret: "></asp:Label>

                                        </div>
                    
                                        <div class="col-2 ">
                                            <asp:TextBox ID="TextBox3" AutoCompleteType="Disabled" runat="server" placeholder="Ödenen Ücreti Giriniz"></asp:TextBox>
                                        </div>
                             </div>           
                
                            <div class="row mt-3 text-center align-items-center ">                   
                    
                                        <div class="col-5 p-3 " style="font-size:20px; top: 0px; left: 0px;">
                                            <asp:Button ID="Button1" runat="server" Text="Ödeme Yap" BackColor="brown" BorderColor="brown" Font-Bold="False" Font-Names="Bahnschrift Light" ForeColor="White" OnClick="Button1_Click" />
                                        </div>
                          </div>
           
          </div>

                <div class="col text-center">
                    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="SqlDataSource1" CellPadding="4" ForeColor="#333333" GridLines="None">
                        <AlternatingRowStyle BackColor="White" ForeColor="#284775" />
                        <Columns>
                            <asp:BoundField DataField="ogrNo" HeaderText="Öğrenci Numarası" InsertVisible="False" ReadOnly="True" SortExpression="ogrNo" />
                            <asp:BoundField DataField="ogrAd" HeaderText="Öğrenci Adı" SortExpression="ogrAd" />
                            <asp:BoundField DataField="ogrSoyad" HeaderText="Öğrenci Soyadı" SortExpression="ogrSoyad" />
                            <asp:BoundField DataField="ogrSinif" HeaderText="Öğrenci Sınıfı" SortExpression="ogrSinif" />
                        </Columns>
                        <EditRowStyle BackColor="#999999" />
                        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
                        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
                        <PagerStyle BackColor="#284775" ForeColor="White" HorizontalAlign="Center" />
                        <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
                        <SelectedRowStyle BackColor="#E2DED6" ForeColor="#333333" Font-Bold="True" />
                        <SortedAscendingCellStyle BackColor="#E9E7E2" />
                        <SortedAscendingHeaderStyle BackColor="#506C8C" />
                        <SortedDescendingCellStyle BackColor="#FFFDF8" />
                        <SortedDescendingHeaderStyle BackColor="#6F8DAE" />
                    </asp:GridView>

                    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:SAvTConnectionString %>" SelectCommand="SELECT [ogrNo], [ogrAd], [ogrSoyad], [ogrSinif] FROM [ogrenci]"></asp:SqlDataSource>

                </div>
          </div>
            
            <div class="row">
                <div class="col">
                    <asp:Button ID="Button3" runat="server" Text="Geri" OnClick="Button3_Click" />
                </div>
            </div>
            
      </div>

    </form>
        </div>
</body>
</html>
