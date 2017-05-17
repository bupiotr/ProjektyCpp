using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ColorfulCrypter
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int width = 400, height = 400, x = 0, zaduzo = 0;
            int[] tablica = new int[400];
            string doCryptu = richTextBox1.Text;
            Bitmap mapa = new Bitmap(width, height);

            if (richTextBox1.TextLength > width)
            {
                zaduzo = richTextBox1.TextLength - width;
                MessageBox.Show($"Error twoj tekst jest za duzy o {zaduzo} znakow");
            }
            else
            {
                for (int y = 0; y < height; y++)
                {
                    foreach (char letter in doCryptu)
                    {
                            int converted = Convert.ToInt32(letter);
                            mapa.SetPixel(x, y, Color.FromArgb(255, converted, converted, converted));
                            x++;
                    }
                    x = 0;
                }
            }

                pictureBox1.Image = mapa;

            }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            pictureBox1.Image.Save("kappa.png");
        }
    }
}
