import logging
import time

if __name__ == "__main__":
    format = "%(asctime)s: %(message)s"
    logging.basicConfig(format=format, level=logging.INFO,
                        datefmt="%H:%M:%S")
    
    logging.info("Main    : before creating thread")
    x = args=(1)
    logging.info("Main    : before running thread")
    logging.info("Thread %s: starting", x)
    time.sleep(2)
    logging.info("Thread %s: finishing", x)
    logging.info("Main    : wait for the thread to finish")
    
    logging.info("Main    : all done")