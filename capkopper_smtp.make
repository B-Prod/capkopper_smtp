; capKoper SMTP Makefile

api = 2
core = 7.x

; Mail System
projects[mailsystem][version] = 2.34
projects[mailsystem][subdir] = contrib

projects[mailsystem][patch][2051135] = https://www.drupal.org/files/issues/mailsystem-theme_registry-2051135-13.patch

; Swiftmailer
projects[swiftmailer][version] = 1.6
projects[swiftmailer][subdir] = contrib

projects[swiftmailer][patch][2321215] = https://www.drupal.org/files/issues/swiftmailer-alter-hook-2321215-2.patch
projects[swiftmailer][patch][2190687] = https://www.drupal.org/files/issues/swiftmailer-deprecated-function-preg_replace-html2text-2190687-8.patch

libraries[swiftmailer][download][type] = get
libraries[swiftmailer][download][url] = https://github.com/swiftmailer/swiftmailer/archive/v5.4.1.zip

