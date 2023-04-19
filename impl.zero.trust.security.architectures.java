import javax.crypto.Cipher;

public class ZeroTrustExample {
  public static void main(String[] args) {
    try {
      Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
      cipher.init(Cipher.ENCRYPT_MODE, key);
      byte[] encrypted = cipher.doFinal(input.getBytes());
      System.out.println(new String(encrypted));
    } catch (Exception e) {
      System.out.println(e.getMessage());
    }
  }
}
