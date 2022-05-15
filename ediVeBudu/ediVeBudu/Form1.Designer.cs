namespace ediVeBudu
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.medyaIcerikleriLbl = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.secilenDiziAlani = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // listBox1
            // 
            this.listBox1.Font = new System.Drawing.Font("Century Gothic", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 22;
            this.listBox1.Location = new System.Drawing.Point(59, 52);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(798, 158);
            this.listBox1.TabIndex = 0;
            // 
            // medyaIcerikleriLbl
            // 
            this.medyaIcerikleriLbl.AutoSize = true;
            this.medyaIcerikleriLbl.Font = new System.Drawing.Font("Bahnschrift Light", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.medyaIcerikleriLbl.ForeColor = System.Drawing.Color.Black;
            this.medyaIcerikleriLbl.Location = new System.Drawing.Point(367, 24);
            this.medyaIcerikleriLbl.Name = "medyaIcerikleriLbl";
            this.medyaIcerikleriLbl.Size = new System.Drawing.Size(160, 25);
            this.medyaIcerikleriLbl.TabIndex = 1;
            this.medyaIcerikleriLbl.Text = "Medya İçerikleri";
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.White;
            this.button1.FlatAppearance.BorderSize = 0;
            this.button1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button1.Font = new System.Drawing.Font("Bahnschrift Light", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.button1.Location = new System.Drawing.Point(400, 238);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(113, 51);
            this.button1.TabIndex = 2;
            this.button1.Text = "Dizi Seç";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // secilenDiziAlani
            // 
            this.secilenDiziAlani.AutoSize = true;
            this.secilenDiziAlani.Font = new System.Drawing.Font("Century Gothic", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.secilenDiziAlani.Location = new System.Drawing.Point(368, 327);
            this.secilenDiziAlani.Name = "secilenDiziAlani";
            this.secilenDiziAlani.Size = new System.Drawing.Size(181, 22);
            this.secilenDiziAlani.TabIndex = 3;
            this.secilenDiziAlani.Text = "Seçilecen Dizi Alanı";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(225)))), ((int)(((byte)(190)))), ((int)(((byte)(160)))));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(917, 491);
            this.Controls.Add(this.secilenDiziAlani);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.medyaIcerikleriLbl);
            this.Controls.Add(this.listBox1);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Edi ve Budu";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Label medyaIcerikleriLbl;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label secilenDiziAlani;
    }
}

