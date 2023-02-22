fun main(){
    var angka: Int
    println("Program Mengecek Angka Ganjil atau Genap")
    println("visit us @hobingoding.com\n")
    //Input Angka
    print("Input Angka : ")
    angka = readLine()!!.toInt()
    //Pengecekan Angka
    if(angka%2==0)
        println("Angka ${angka} merupakan angka Genap.")
    else
        println("Angka ${angka} merupakan angka Ganjil.")
}
