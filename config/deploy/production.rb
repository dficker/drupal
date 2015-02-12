# Deploy Drupal site using Capistrano
#
# Usage:
# cap production deploy:setup
# cap production deploy

# --------------------------------------------
# Server Variables (Overridden)
#
# If your production site is located on a different
# or multiple servers consider using this syntax:
#
#    role :web, "www2.domain.com"
#    role :web, "www3.domain.com"
#    role :db, "master.domain.com", :primary => true
#    role :db, "slave1.domain.com"
#    role :db, "slave2.domain.com"
# --------------------------------------------
#server "anotherdomain.com", :web, :db

# --------------------------------------------
# Git/git-flow configuration
#
# if you are using Git or the git-flow workflow
# you should specify the :branch your environment
# deploys from. 
# 
# For example: 
#   + the staging environment should use the `develop` branch
#   + the production environment should use the `master` branch
# --------------------------------------------
set :branch, "master"

# --------------------------------------------
# Multisites
# -------------------------------------------- 
# Setting which folder in the sites directory to use
# change's the name of your local site folder to the 
# fully qualified domain name (URL) of the live site,
# so if you want the 'www' included in the url use
# this example:
#    set :multisites, { 
#      'bestappever.local' => 'www.bestappever.com'
#    }
set :multisites, {
  'rocori.k12.mn.us' => 'rocori.k12.mn.us',
}