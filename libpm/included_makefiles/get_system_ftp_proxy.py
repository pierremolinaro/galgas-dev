#!/usr/bin/python
# -*- coding: utf-8 -*-
 
import urllib
 
ftp_proxy = urllib.getproxies()['ftp']

if ftp_proxy != "" :
  print "--proxy " + ftp_proxy
