import zapv2

# create a ZAP instance
zap = zapv2.ZAPv2()

# set target URL
target_url = "http://example.com"

# start ZAP proxy
zap.core.start_proxies()

# spider the target URL
zap.spider.scan(target_url)

# scan for vulnerabilities
zap.ascan.scan(target_url)

# retrieve alerts
alerts = zap.core.alerts()

# print alerts
for alert in alerts:
    print(alert)
