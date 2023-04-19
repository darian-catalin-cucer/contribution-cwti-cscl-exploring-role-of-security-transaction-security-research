// Use OWASP ZAP for web application scanning
ClientApi api = new ClientApi("localhost", 8080);
api.core.newSession();
api.pscan.enableAllScanners();
api.spider.scan("https://example.com");

// Use Nmap for network scanning
ProcessBuilder pb = new ProcessBuilder("nmap", "-sS", "192.168.1.1");
pb.redirectErrorStream(true);
Process process = pb.start();
InputStream stdout = process.getInputStream();
BufferedReader br = new BufferedReader(new InputStreamReader(stdout));
String line;
while ((line = br.readLine()) != null) {
    System.out.println(line);
}
