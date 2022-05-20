fun main(){
    var bilangan: Int

    println("Program Menentukan Bilangan Ganjil Genap\n")
    //visit us @hobingoding.com

    //Penginputan Bilangan yang akan Dicek
    print("Input Bilangan : ")
    bilangan = readLine()!!.toInt()

    //Penghitungan dan Pengecekan Hasil Modulo
    if(bilangan % 2 == 0)
        println("Hasil : Bilangan Genap")
    else
        println("Hasil : Bilangan Ganjil")
}
