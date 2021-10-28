public class binatang
{
    String nama;
    String makanan;
    int kaki;
    
    void lari(String namaHewan, String makananHewan, int kakiHewan) {
     nama = namaHewan;
     makanan = makananHewan;
     kaki = kakiHewan;     
    }
    
    String ambilNama() {
    return nama;
    }    

    String ambilMakanan(){
    return makanan;
    }
    
    int ambilKaki(){
    return kaki;
    }
}
