// Avoid using hardcoded passwords and use encryption
String password = "mypassword";
String encryptedPassword = BCrypt.hashpw(password, BCrypt.gensalt());
System.out.println("Encrypted password: " + encryptedPassword);

// Use prepared statements to avoid SQL injection
String username = "john";
String query = "SELECT * FROM users WHERE username=?";
PreparedStatement stmt = conn.prepareStatement(query);
stmt.setString(1, username);
ResultSet rs = stmt.executeQuery();

// Use HTTPS for secure communication
URL url = new URL("https://example.com");
HttpsURLConnection conn = (HttpsURLConnection) url.openConnection();
conn.setRequestMethod("GET");
conn.setDoOutput(true);
conn.connect();
