# Example of checking for open ports on a Linux system with the nmap library
import nmap

scanner = nmap.PortScanner()
scanner.scan('127.0.0.1', arguments='-sS')
print(scanner['127.0.0.1'].all_tcp())
