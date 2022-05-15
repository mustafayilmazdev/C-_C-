<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="WebApplication2._default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Dershane</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server" style="margin-left: 55px"></asp:TextBox>
    
    </div>
</body>
    <p>
        <asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
        <asp:TextBox ID="TextBox2" runat="server" style="margin-left: 57px"></asp:TextBox>
    </p>
    <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" style="margin-left: 101px" Text="Button" />
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <asp:ListBox ID="ListBox1" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource1" DataTextField="ad" DataValueField="ad" Height="111px" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged" Width="873px">
        <asp:ListItem></asp:ListItem>
        <asp:ListItem></asp:ListItem>
    </asp:ListBox>
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:dershaneConnectionString %>" SelectCommand="SELECT * FROM [bilgi]"></asp:SqlDataSource>
    <br />
    <br />
    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataSourceID="SqlDataSource1">
        <Columns>
            <asp:CommandField ShowSelectButton="True" />
            <asp:BoundField DataField="ad" HeaderText="ad" SortExpression="ad" />
            <asp:BoundField DataField="soyad" HeaderText="soyad" SortExpression="soyad" />
        </Columns>
    </asp:GridView>
    </form>

</html>
