<h1 align="center">💳 VISA & Mastercard Transaction 101.1</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Topic-Crypto%2FPayment-blueviolet?style=for-the-badge&logo=ethereum&logoColor=white" alt="Topic" />
  <img src="https://img.shields.io/badge/Status-Learning-brightgreen?style=for-the-badge&logo=gitbook&logoColor=white" alt="Status" />
  <img src="https://img.shields.io/badge/License-MIT-blueviolet?style=for-the-badge&logo=open-source&logoColor=white" alt="License" />
  <img src="https://img.shields.io/badge/GitHub-Stars-yellow?style=for-the-badge&logo=github" alt="Stars" />
  <img src="https://img.shields.io/badge/GitHub-Forks-lightgrey?style=for-the-badge&logo=github" alt="Forks" />
  <img src="https://img.shields.io/badge/Network-VISA-blue?style=for-the-badge&logo=visa&logoColor=white" alt="VISA" />
  <img src="https://img.shields.io/badge/Network-Mastercard-red?style=for-the-badge&logo=mastercard&logoColor=white" alt="Mastercard" />
  <img src="https://img.shields.io/badge/Level-Beginner-ff69b4?style=for-the-badge&logo=learning" alt="Level Beginner" />
</p>

---

<p align="center">
  <img src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExOWR3dmVxNnk5YWU5YzEyYmZsa24xYTZ2Y2tocTZzOTNsOHVtNmFxaSZlcD12MV9naWZzX3NlYXJjaCZjdD1n/xGulxHj3c2rT1yGs34/giphy.gif" alt="Alur Transaksi Kartu Kredit" width="500"/>
</p>

---

<h2 align="center">📖 Deskripsi</h2>
<p align="center">
Topik ini membahas <b>VISA & Mastercard Transaction</b> secara dasar dan teknis.<br>
Tujuan: memahami alur transaksi elektronik, peran bank dan jaringan kartu, jenis transaksi, dan keamanan kartu.<br>
Berguna untuk edukasi Cyber Security, FinTech, dan blockchain payment insight.
</p>

---

<h2 align="center"> 📈 Alur Transaksi Kartu Kredit</h2>
<p align="center">

<h3 align="center"> Diagram di bawah ini menggambarkan alur transaksi kartu kredit secara sederhana.</h3>h
<p align="center">
  
```mermaid
flowchart TD
    A[Cardholder] -->|Initiates Payment| B[Merchant]
    B -->|Send Payment Info| C[Payment Gateway]
    C -->|Forward to Acquirer| D[Acquirer Bank]
    D -->|Route via Network| E[Card Network VISA-MC]
    E --> F[Issuer Bank]
    F -->|Approve/Reject| E
    E --> D
    D --> C
    C --> B
    B --> A[Payment Confirmation]

    subgraph Optional_Authentication
        C -->|3D Secure Challenge| G[Cardholder OTP/Challenge]
        G --> C
    end

    subgraph Settlement
        F -->|Transfer Funds T+1/T+2/T+3| D
        D --> B
    end
```

<h2 align="center">⚡ Struktur Dasar Kartu</h2>

<div align="center">

<table border="1" cellpadding="10" cellspacing="0" style="border-collapse: collapse;">
  <thead>
    <tr>
      <th>Elemen</th>
      <th>Keterangan</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Card Number (PAN)</td>
      <td>16 digit unik kartu</td>
    </tr>
    <tr>
      <td>Cardholder Name</td>
      <td>Nama pemilik kartu</td>
    </tr>
    <tr>
      <td>Expiry Date</td>
      <td>Bulan/Tahun kadaluarsa</td>
    </tr>
    <tr>
      <td>CVV/CVC</td>
      <td>3 digit keamanan di belakang kartu</td>
    </tr>
    <tr>
      <td>Issuer Bank</td>
      <td>Bank penerbit kartu</td>
    </tr>
    <tr>
      <td>Network</td>
      <td>VISA / Mastercard</td>
    </tr>
  </tbody>
</table>

</div>


---

<h2 align="center">🚀 Alur Transaksi (Basic Flow)</h2>
<p align="center">
1. <b>Authorization</b> → Pemegang kartu → Merchant → Payment Gateway → Acquirer Bank → Card Network → Issuer Bank → Approve/Reject<br>
2. <b>Authentication (Opsional)</b> → 3D Secure (Verified by Visa / Mastercard SecureCode) → OTP atau challenge<br>
3. <b>Clearing</b> → Transaksi disetujui → dikumpulkan dalam batch untuk diproses<br>
4. <b>Settlement</b> → Uang dikirim dari Issuer Bank → Acquirer Bank → Merchant (T+1 sampai T+3 hari kerja)
</p>

---

<h2 align="center">🏦 Peran dalam Network</h2>

<div align="center">

<table border="1" cellpadding="10" cellspacing="0" style="border-collapse: collapse;">
  <thead>
    <tr>
      <th>Role</th>
      <th>Fungsi</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Cardholder</td>
      <td>Pemilik kartu</td>
    </tr>
    <tr>
      <td>Merchant</td>
      <td>Penjual / penyedia jasa</td>
    </tr>
    <tr>
      <td>Acquirer Bank</td>
      <td>Bank merchant, menerima transaksi</td>
    </tr>
    <tr>
      <td>Issuer Bank</td>
      <td>Bank pemegang kartu</td>
    </tr>
    <tr>
      <td>Card Network</td>
      <td>VISA / Mastercard, routing & settlement</td>
    </tr>
  </tbody>
</table>

</div>


---

<h2 align="center">🔹 Jenis Transaksi</h2>
<p align="center">
- Purchase Transaction: Pembelian barang/jasa<br>
- Cash Advance: Penarikan tunai di ATM<br>
- Refund: Pengembalian dana<br>
- Reversal: Pembatalan transaksi yang salah
</p>

---

<h2 align="center">🔒 Security & Verification</h2>
<p align="center">
- CVV/CVC: Verifikasi kartu valid<br>
- 3D Secure: Lapisan tambahan untuk transaksi online<br>
- Tokenization: Ganti PAN dengan token<br>
- Encryption: Semua data kartu dienkripsi saat dikirim
</p>

---

<h2 align="center">💡 Contoh Sederhana</h2>
<p align="center">
1. Pembelian $100 di toko online<br>
2. Merchant → Payment Gateway → Acquirer → VISA Network → Issuer<br>
3. Issuer cek saldo → Approve $100<br>
4. Gateway memberi respon ke merchant → konfirmasi ke customer<br>
5. Settlement → uang sampai ke merchant T+1/2/3
</p>

---

<h2 align="center">🛠️ Pengembangan</h2>
<p align="center">
<pre>
git clone https://github.com/kongali1720/visa-mc-transaction.git
cd visa-mc-transaction
# Bisa tambahkan simulasi Authorization, 3D Secure, dan Settlement
</pre>
</p>

---

<h2 align="center">📜 License</h2>
<p align="center">
This project is licensed under the <a href="LICENSE">MIT License</a>.<br>
You are free to use, modify, and distribute this project under the terms of MIT.
</p>

---



<h3 align="center" style="color:#39ff14; font-size:1.5rem;">
💡 ☕ Traktir Kopi & Nasi Padang / Nasi Gorengnya ya cuy! 😄
</h3>

<div align="center">

<p style="color:#ffffff; font-size:1.1rem;">
Dukung terus biar semangat bikin karya edukatif lainnya...  
Keep supporting so I stay motivated to create more educational works!
</p>

<a href="https://www.paypal.com/paypalme/bungtempong99" target="_blank" style="text-decoration:none;">
  <img 
    src="https://img.shields.io/badge/Buy%20Me%20a%20Coffee-☕-FF6600?style=for-the-badge&logo=paypal&logoColor=white" 
    alt="Buy Me a Coffee" 
    style="margin-top:10px;"
  />
</a>

<p style="color:#39ff14; font-size:1rem; margin-top:8px;">
Support with ☕ so I can buy 🍜 and keep being 🧠!
</p>

</div>

---

<h2 align="center" style="color:#39ff14;">📫 Let’s Connect Like Hackers</h2>

<div align="center">

<table style="margin: 0 auto; border-collapse: collapse;">
  <thead>
    <tr>
      <th style="padding: 12px 25px; font-size: 18px; color:#ffffff;">Platform</th>
      <th style="padding: 12px 25px; font-size: 18px; color:#ffffff;">Detail</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="padding: 12px 25px; color:#39ff14;">GitHub</td>
      <td style="padding: 12px 25px;"><a href="https://github.com/kongali1720" target="_blank">kongali1720</a></td>
    </tr>
    <tr>
      <td style="padding: 12px 25px; color:#39ff14;">Email</td>
      <td style="padding: 12px 25px;"><a href="mailto:kongali1720@gmail.com">kongali1720@gmail.com</a></td>
    </tr>
    <tr>
      <td style="padding: 12px 25px; color:#39ff14;">Site</td>
      <td style="padding: 12px 25px;"><a href="https://younext.cloud" target="_blank">Coming soon — stay curious...</a></td>
    </tr>
  </tbody>
</table>

</div>

---

<h3 align="center" style="color:#ff69b4;">❤️ 💻 INITIATING HUMANITY MODE... for Down Syndrome ❤️</h3>

<div align="center">

<table style="margin: 0 auto; border-collapse: collapse; box-shadow: 0 4px 10px rgba(0,0,0,0.2); border-radius: 8px; overflow: hidden;">
  <thead style="background-color:#ff69b4; color:white;">
    <tr>
      <th style="padding: 12px 25px; font-size: 18px;">Item</th>
      <th style="padding: 12px 25px; font-size: 18px;">Keterangan / Description</th>
    </tr>
  </thead>
  <tbody style="background-color:#1a1a1a; color:#39ff14;">
    <tr>
      <td style="padding: 12px 25px;">🎯 Target</td>
      <td style="padding: 12px 25px;">Anak-anak Pejuang Down Syndrome / Kids with Down Syndrome</td>
    </tr>
    <tr>
      <td style="padding: 12px 25px;">📡 Status</td>
      <td style="padding: 12px 25px;">Butuh Dukungan / Needs Support</td>
    </tr>
    <tr>
      <td style="padding: 12px 25px;">🧠 Response</td>
      <td style="padding: 12px 25px;">Buka Hati + Klik Link = Satu Senyum Baru / Open Heart + Click Link = One New Smile</td>
    </tr>
  </tbody>
</table>

<p align="center" style="margin-top:15px; color:white; font-size:1rem;">
Mereka bukan berbeda — mereka dilahirkan untuk mengajarkan dunia tentang cinta yang murni dan kesabaran yang luar biasa.<br>
They are not different — they were born to teach the world pure love and extraordinary patience.
</p>

<p align="center" style="margin-top: 15px;">
  <a href="https://mydonation4ds.github.io/" target="_blank" style="display: inline-block; text-decoration:none;">
    <img 
      src="https://img.shields.io/badge/SUPPORT--NOW-%23FF6600?style=for-the-badge&logo=heart&logoColor=white&labelColor=FF6600&color=FF4500&logoWidth=15" 
      alt="Support Now" 
      style="height: 40px;"
    />
  </a>
</p>

---

<section align="center" style="font-family: Arial, sans-serif;">

<h2 style="margin-bottom: 15px; color: #0070f3;">💳 Dukungan Pembayaran</h2>

<table align="center" style="margin: 0 auto; border-collapse: collapse; border-radius: 8px; overflow: hidden;">
  <thead style="background-color: #0070f3; color: white;">
    <tr>
      <th style="padding: 10px 20px; font-size: 16px;">Visa</th>
      <th style="padding: 10px 20px; font-size: 16px;">Mastercard</th>
      <th style="padding: 10px 20px; font-size: 16px;">PayPal</th>
    </tr>
  </thead>
  <tbody style="background-color: #f9f9f9;">
    <tr>
      <td style="padding: 10px;">
        <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/41/Visa_Logo.png/120px-Visa_Logo.png" alt="Visa" width="90" />
      </td>
      <td style="padding: 10px;">
        <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Mastercard-logo.svg/120px-Mastercard-logo.svg.png" alt="Mastercard" width="90" />
      </td>
      <td style="padding: 10px;">
        <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/39/PayPal_logo.svg/120px-PayPal_logo.svg.png" alt="PayPal" width="90" />
      </td>
    </tr>
  </tbody>
</table>

</section>

---

<p align="center" style="margin-top: 15px;">
  Kalau project ini bantu kamu, jangan lupa kasih bintang ⭐ dan share ke teman-teman!<br>
  Follow <a href="https://twitter.com/kongali1720" target="_blank">@kongali1720</a> untuk diskusi & update seru 🔥
</p>

<p align="center" style="margin-top: 10px;">
  <a href="https://twitter.com/kongali1720" target="_blank">
    <img src="https://img.shields.io/twitter/follow/kongali1720?style=social" alt="Twitter Follow" />
  </a>
</p>


