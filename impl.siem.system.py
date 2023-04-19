from elasticsearch import Elasticsearch
from logstash_async.handler import AsynchronousLogstashHandler
import logging

# create an Elasticsearch instance
es = Elasticsearch(hosts=["localhost"])

# create a Logstash handler
logstash_handler = AsynchronousLogstashHandler(
    "localhost", 5000, database_path=None
)

# set up logging
logger = logging.getLogger("my_logger")
logger.addHandler(logstash_handler)

# log events
logger.warning("This is a warning message")
logger.error("This is an error message")
