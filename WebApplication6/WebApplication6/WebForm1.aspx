    <%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication6.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Ana Sayfa</title>
    <link href="css/bootstrap.min.css" rel="stylesheet" />
    <link href="css/stillerim.css" rel="stylesheet" />
</head>
<body style="background:Brown ;">
    <form  id="form1" runat="server">
    <div class="container  align-items-center " style="  font-size:30px; color:white;">
        <div class="row m-5"></div>
          <div class="row m-5"></div>
        <div class="row m-5 " style="font-size: 50px;">
            <div class="col text-center">Yönetim Paneline Hoşgeldiniz</div>
      

        </div>

        <div class="row p-5 text-center" server="" style="background: <asp:Image runat=; background-image: url('http://localhost:50595/img/1_dP81IJq-tGFxy1rIK3RYsg.png');">
         <div class="col m-5 ">
             <asp:Button ID="Button1" runat="server" Text="Kayıt" OnClick="Button1_Click" BackColor="#FFCC66" ForeColor="White" Width="149px" Font-Bold="True" Font-Italic="False" Font-Names="Bahnschrift SemiLight" />
         </div>
            <div class="col m-5">
                <asp:Button ID="Button2" runat="server" Text="Ödeme" BackColor="#FFCC66" ForeColor="White" Width="149px" Font-Bold="True" Font-Names="Bahnschrift SemiLight" OnClick="Button2_Click" />
            </div>
            <div class="col m-5">
                <asp:Button ID="Button3" runat="server" Text="Ödeme Listele" BackColor="#FFCC66" ForeColor="White" Width="220px" Font-Bold="True" Font-Names="Bahnschrift SemiLight" OnClick="Button3_Click" />
            </div>
        </div>
        
        <div class="row text-center m-5">
           Lütfen Gerçekleştirmek İstediğiniz işlemi Yapmak İçin Butonlardan Seçim Yapınız
        </div>

    </div>
       
    </form>
    </body>
</html>
