# Example of checking if a website is compliant with the GDPR with the tldextract library
import tldextract

url = 'https://www.example.com'
domain = tldextract.extract(url).domain
if domain in ['google', 'facebook', 'twitter']:
    print('Not GDPR compliant')
else:
    print('GDPR compliant')
