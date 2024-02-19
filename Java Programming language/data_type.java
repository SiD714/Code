public class data_type {
    public static void main(String[] args) {
        byte b=8;
        System.out.println(b); 
        //byte(1 byte) ke andar total 256 numbers store kara sakte hai
        //(-128 se 127 tak)

        char ch ='a';//(2 byte size)
        System.out.println(ch);

        boolean var=true; //(1 byte size)
        System.out.println(var);
        //boolean value ya to true ya to false

        float price=1.5f;//(4 byte size)
        System.out.println(price);

        int c=25;//(4 byte size)
        //agar bade size ka integer likhna chahte hai to long(8 byte) ka use
        //agar bade size ka float likhna hai to double(8 bytes)

        short n=234;//(2 byte size)
        //short aur byte ka jyada use nahi hota
    }
}
