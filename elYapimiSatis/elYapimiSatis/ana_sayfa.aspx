<%@ Page Title="" Language="C#" MasterPageFile="~/sablon.Master" AutoEventWireup="true" CodeBehind="ana_sayfa.aspx.cs" Inherits="elYapimiSatis.WebForm3" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <div class="container-fluid p-0" style="background-image: linear-gradient(to right, rgba(234, 242, 249),rgba(250, 236, 237))">
         
          <div class="row justify-content-center">
           <div id="carouselExampleControls" class="carousel slide" data-ride="carousel">
              <div class="carousel-inner">
                <div class="carousel-item active">
                  <img class="img-fluid" src="resimler/anasayfa/1.jpg" alt="First slide">
                </div>
                <div class="carousel-item">
                  <img class="img-fluid" src="resimler/anasayfa/2.jpg" alt="Second slide">
                </div>
                <div class="carousel-item">
                  <img class=" img-fluid" src="resimler/anasayfa/3.jpg" alt="Third slide">
                </div>
              </div>
              <a class="carousel-control-prev" href="#carouselExampleControls" role="button" data-slide="prev">
                <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                <span class="sr-only">Previous</span>
              </a>
              <a class="carousel-control-next" href="#carouselExampleControls" role="button" data-slide="next">
                <span class="carousel-control-next-icon" aria-hidden="true"></span>
                <span class="sr-only">Next</span>
              </a>
            </div>
          </div>
      
    </div>
</asp:Content>
