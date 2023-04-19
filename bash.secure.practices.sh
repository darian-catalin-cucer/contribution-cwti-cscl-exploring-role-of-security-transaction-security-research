# Example of password hashing with the hashlib library
import hashlib

password = b'my_password'
salt = hashlib.sha256(b'some_salt').hexdigest().encode()
hashed_password = hashlib.pbkdf2_hmac('sha256', password, salt, 100000)
print(hashed_password)
