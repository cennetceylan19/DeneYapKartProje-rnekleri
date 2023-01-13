# DeneYapKartProje-Örnekleri

Merhaba, bu repoyu Deneyap atolyesi Elektronik Programlama ve Nesnelerin İnterneti Eğitmeni olarak görev aldığım süre boyunca gerekli olan deneyap kartıyla yapılan temel programlama örnekleri için açtım. Bu sayede öğrencilere temel elektronik programlamanın yanında temel git ve github eğitimi de vermeyi amaçlıyorum. 

Deneyap kart gerekli kurulumlar sayesinde Arduino IDE üzerinde programlanabilir. 

![image](https://user-images.githubusercontent.com/65015625/212326292-d80512e4-d602-4fcb-8a73-5b01b9e038a8.png)

Deneyap Kart’tın özellikleri aşağıda listelenmiştir.
• Güçlü çift çekirdek Tensilica LX6 mikroişlemcisi
• Dahili Wi-Fi, 
• Çift mod (Dual) dahili Bluetooth özelliği ile hem BLE hem de EDR altyapısı, 
• LSM6DSM algılayıcısı ile 3-eksen ivme ve 3-eksen dönü ölçümü,
•	MEMS teknolojisine sahip dahili MP34DT05 mikrofon,
•	UART, I2C, SPI, Etjernet, SDIO, Kapasitif Algılayıcı bağlantı arayüzleri,
•	Genel amaçlı kullanılabilen 24 adet Giriş/Çıkış pini (Aşırı akıma karşı PTC sigorta ile koruma,
•	Li-Po bağlantı konnektörü,
•	2 adet buton,
•	1 adet RGB LED.  

Deneyap Kart aslında farklı güç kaynağı girişlerine sahiptir. Bunlar Mikro-B USB port, Li-Po Batarya Konnektör girişi ve kart üzerindeki pinlerdir. Bu ders kapsamında Deneyap Kart’a Mikro-B USB port üzerinden bilgisayara bağlayarak güç verilecektir. USB port; aynı zamanda Deneyap Kart’ın bilgisayarla iletişim kurmasını ve yazdığımız kodları aktarmamızı sağlar. Bu haberleşmeyi yine Deneyap Kart üzerindeki “240 MHz Çift Çekirdek Tensilica LX6” mikroişlemci gerçekleştirir. Deneyap Kart üzerinde bir adet RGB LED bulunur ve Deneyap Kart’ın “D2”, “D3” ve “D10” pinine bağlıdır. Ayrıca Deneyap Kart üzerinde seri haberleşmenin sağlanması için “TX - RX” pinleri bulunmaktadır. Bu pinler Deneyap Kart ile bilgisayar arasında veri alışverişi esnasında Deneyap Kart’ta “TX” pininden veri gönderilirken; “RX” pininden ise veri alınır. “TX” pini aynı zamanda “D2” digital pini ve “RX” pini de “D3” digital pini olarak kullanılabilir. Bunlara ek olarak Deneyap Kart üzerinde kartın çalışıp çalışmadığını gösteren güç LED’i bulunmaktadır. Deneyap Kart üzerinde genel amaçlı ve Reset (sıfırlama) olarak iki adet buton bulunur. Reset butonu Deneyap Kart üzerine aktardığımız kodu en baştan başlatmamızı sağlar.

Denayap Kart’ın mikrodenetleyici özelliklerini kullanmak için bir programlama diline ihtiyaç vardır. Elektronik Programlama ve Nesnelerin İnterneti dersinde bu amaç doğrultusunda Arduino IDE kullanılacaktır. Arduino IDE metin tabanlı ve C benzeri bir kod dizimi (syntax) sahip olan bir geliştirme ortamıdır.

![image](https://user-images.githubusercontent.com/65015625/212326962-0a435712-0657-4199-90d7-982ddd87f0e9.png)

Gerekli kodlar ve bağlantı şemaları farlı klasörler içerisinde yer almaktadır.
