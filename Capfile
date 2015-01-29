# Capfile
load 'deploy' if respond_to?(:namespace) # cap2 differentiator

# --------------------------------------------
# :application HAS TO BE DEFINED BEFORE
# REQUIRING 'ash/drupal'
# --------------------------------------------
set :application, "rocori.k12.mn.us"

# --------------------------------------------
# Define required Gems/libraries
# --------------------------------------------
require 'ash/drupal_shared_hosting'

# --------------------------------------------
# Server Variables/Defaults
#
#    Alternative Server(s) Configuration:
#      role :web, "domain.com"  # can also use IP-address or host's servername
#      role :db, "domain.com"   # can also use IP-address or host's servername
# --------------------------------------------
server "64.8.186.164", :web, :db

set :user, "administrator"
set(:deploy_to) { "/var/www/website/#{application}/#{stage}" }

# --------------------------------------------
# Git/SVN Variables
# 
#    Example SVN configuration:
#      set :repository, "https://svn.augustash.com/<PATH/TO/REPO>/trunk"
#      set :scm_username, "<SVN_USER>"
#
#    Example Git configuration:
#      set :repository, "git@github.com:augustash/<REPO_NAME>.git"
#      set :scm, "git"
#      #set :branch, "master" # define which branch 
#                             # should be used for deployments
# --------------------------------------------
set :repository, "https://github.com/rocori/drupal.git"
set :scm, "git"
# uncomment the line below if your project uses submodules (updates submodules)
#set :git_enable_submodules, 1


# --------------------------------------------
# Database/Backup Variables
# --------------------------------------------
# Database credentials will be defined in the 
# settings.production.php or settings.staging.php
# files, which drush will use when doing database
# dumps
set :keep_backups, 3 # only keep 3 backups (default is 10)

# Set Excluded directories/files (relative to the application's root path)
set(:backup_exclude) { [ "var/", "tmp/" ] }

# --------------------------------------------
# Compile Sass stylesheets and upload to servers
#
# ONLY RUNS IF YOU HAVE SET :compass_watched_dirs
#
# :compass_watched_dirs can either be a string or an array
#
# Example:
#   # Use the array syntax if you compass watch several directories:
#   set :compass_watched_dirs, ["sites/all/themes/ash", "sites/all/themes/my_custom_theme"]
#   # Use the string syntax if you only compass watch one directory:
#   set :compass_watched_dirs, "sites/all/themes/ash"
#
# If you name your public stylesheets directory something
# other than "stylesheets" than you can specify the name of 
# the directory with the :stylesheets_dir_name variable
#
# Examples (both assume your compiled stylesheets exist within your :compass_watched_dirs):
#   # If your Sass compiles to your assets/css directory (i.e., `sites/all/themes/ash/assets/css`):
#   set :stylesheets_dir_name, "assets/css"
#   # If your Sass compiles to a separate directory (i.e., `sites/all/themes/ash/styles`):
#   set :stylesheets_dir_name, "styles"
# --------------------------------------------
#set :skip_compass_compile, false # change to true if you want to skip all compass-related tasks
#set :compass_watched_dirs, "sites/all/themes/ash"
#set :stylesheets_dir_name, "assets/css"

# --------------------------------------------
# NGINX/PHP-FPM configuration
#
# If your web server is using NGINX with PHP-FPM
# you can use the below variables and tasks to
# start/stop/restart/status nginx and php-fpm 
# processes. This is especially necessary if you
# are using something like APC to cache your code.
#
# If you are going use these commands it is highly
# suggested that you setup your SSH user to run
# common deploy-related commands (i.e., rm, cp, 
# mkdir, chown, chmod, ln, rsync, etc.) as sudo w/o
# requiring a password.
#
# For example, in your `sudoers` file:
# ```bash
# # ....stuff...
#
# # Command Aliases
# Cmnd_Alias DEPLOYMENT = /usr/bin/rsync, /bin/chmod, /bin/chown, /bin/rm, /etc/init.d/nginx, /etc/init.d/php-fpm
# # ...more stuff...
#
# # The COMMANDS section may have other options added to it.
# #
# # Allow root to run any commands anywhere
# root    ALL=(ALL)       ALL
# <SSH_USER>  ALL=NOPASSWD:   DEPLOYMENT
# ```
#
# ---------
# Options:
# ---------
# :nginx_init_command (Default: `/etc/init.d/nginx`)
#   The path to your nginx control script. You could also use 
#   `service nginx` but it's experimental at this point.
#
# :phpfpm_init_command (Default: `/etc/init.d/php-fpm`)
#    The path to your php-fpm control script. You could also use 
#   `service php-fpm` but it's experimental at this point. 
#
# --------------------------------------------
#after "deploy", "nginx:restart"

# --------------------------------------------
# Callbacks - Set Before/After Precedence
# --------------------------------------------
before "deploy:update_code", "backup"