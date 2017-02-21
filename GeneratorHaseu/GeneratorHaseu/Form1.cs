using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GeneratorHaseu
{
    public partial class Form1 : Form
    {
        string[] litery = new string[25] { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
        string[] literyDuze = new string[25] { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
        string[] cyfry = new string[10] { "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };
        char[] znakiSpecjalne = new char[15] { '!', '@', '#', '$', '%', '^', '&', '*', '(', '&', '/', '<', '>', '{', '}' };

        int iloscZnakow;
        Random generatorLosowych = new Random();
        int cyfraLosowa;
        int literaLosowa;
        int dLiteraLosowa;
        int znakLosowa;
        int Losowa;
        int iloscZnakowWTx;


        public Form1()
        {
            InitializeComponent();
        }

        //przycisk generujacy
        private void button1_Click(object sender, EventArgs e)
        {
            bool czyToLiczba = Int32.TryParse(textBox2.Text, out iloscZnakow);
            if (czyToLiczba)
            {
                textBox1.Text = "";
                iloscZnakowWTx = 0;
                while (iloscZnakowWTx != iloscZnakow)
                { 
                        iloscZnakowWTx = textBox1.Text.Length;

                        cyfraLosowa = generatorLosowych.Next(0, cyfry.Length);
                        literaLosowa = generatorLosowych.Next(0, litery.Length);
                        dLiteraLosowa = generatorLosowych.Next(0, literyDuze.Length);
                        znakLosowa = generatorLosowych.Next(0, znakiSpecjalne.Length);


                        Losowa = generatorLosowych.Next(0, 3);

                        if (Losowa == 0 && checkBox1.Checked) //cyfry
                        {
                            textBox1.Text += cyfry[cyfraLosowa];
                        }
                        if (Losowa == 1 && checkBox2.Checked) //litery
                        {
                            textBox1.Text += litery[literaLosowa];
                        }
                        if (Losowa == 2 && checkBox4.Checked) //duze litery
                        {
                            textBox1.Text += literyDuze[dLiteraLosowa];
                        }
                        if (Losowa == 3 && checkBox3.Checked) // znaki
                        {
                            textBox1.Text += znakiSpecjalne[znakLosowa];
                        }
                }
            }
            else
            {
                MessageBox.Show(textBox2.Text + " to nie jest liczba");
            }
        }
        //cyfry
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
        //litery
        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {

        }
        //znaki specjalne
        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
        
        }
        //ilosc znakow
        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }
        //wygenerowane hasuo
        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }
        //duzelitery
        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label3_Click_1(object sender, EventArgs e)
        {

        }
    }
}
