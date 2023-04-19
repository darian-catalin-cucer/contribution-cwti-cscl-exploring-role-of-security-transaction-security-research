# Example of validating a digital certificate with the pyOpenSSL library
from OpenSSL import crypto

cert = open('cert.pem', 'rb').read()
x509 = crypto.load_certificate(crypto.FILETYPE_PEM, cert)
print(x509.get_subject().CN)
