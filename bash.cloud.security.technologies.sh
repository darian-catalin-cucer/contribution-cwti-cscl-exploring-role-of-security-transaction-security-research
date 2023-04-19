# Example of querying an ElasticSearch database with the ElasticSearch Python client library
from elasticsearch import Elasticsearch

es = Elasticsearch()
res = es.search(index='my_index', body={'query': {'match_all': {}}})
print(res)
