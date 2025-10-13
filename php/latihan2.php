<?php
// Mendefinisikan konstanta PI
define("PI", 3.14159);

// Membaca input jari-jari dari pengguna
$r = readline("Masukkan jari-jari: ");

// Menghitung luas lingkaran
$luas = PI * $r * $r;

// Menampilkan hasil
echo "Luas lingkaran = $luas";
?>