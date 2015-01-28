# Deploy Drupal site using Capistrano
#
# Usage:
# cap staging deploy:setup
# cap staging deploy

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
set :branch, "develop"

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
  'rocori.dev' => 'staging.rocori.k12.mn.us',
}