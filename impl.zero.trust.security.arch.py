import requests

# set up a session
session = requests.Session()

# authenticate user
session.post("http://example.com/login", data={"username": "user", "password": "pass"})

# set up a new session for each request
session_id = session.cookies.get("session_id")
headers = {"Authorization": f"Bearer {session_id}"}

# make a request to a resource
response = session.get("http://example.com/resource", headers=headers)

# verify response
if response.status_code == 200:
    print("Resource accessed successfully")
else:
    print("Access denied")
