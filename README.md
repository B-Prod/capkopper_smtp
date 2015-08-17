# capKopper SMTP

This module provides integration with the capKopper SMTP Gateway or any other
SMTP gateway that follows the same rules. It relies on the Swiftmailer module,
which allosw more advanced authentication methods than the SMTP module (this last
only allows the AUTH LOGIN method, which is not the most secure and relies on a
very old version of the PHPMailer library).

## Configuration
  The configuration of this module is supposed to be done in the settings.php
  file only. Multiple settings.php files for multi-instances should work as
  expected.

  Most of the time, the SMTP rules will be different depending on the current
  environment (dev, staging or live).

  If you have exactly the same environment on all your servers and do not want
  to specify the configuration in the settings.php file, you can use drush then
  store the variables in the database using Features and Strongarm for example.

  Below is an example of configuration for a DEV environment:
  
```php
/**
 * capKopper SMTP module
 *
 * The following variables may be defined here, depending on your needs:
 * - capkopper_smtp:environment: It defines the current environement. The value is
 *   generally one of the following:
 *   - (dev|development): The developpement area.
 *   - (staging|preprod|preproduction): The staging server.
 *   - (prod|production|live): The production server.
 * - capkopper_smtp:recipients: A coma separated list of recipients. The email
 *   message will not be delivered to the email addresses defined in the "To"
 *   property but will be sent to the recipients defined here.
 * - capkopper_smtp:account: A extra parameter that is usually used for filtering
 *   on the SMTP gateway.
 */
$conf['capkopper_smtp:environment'] = 'dev';
#$conf['capkopper_smtp:recipients'] = 'me@example.com';
$conf['capkopper_smtp:account'] = 'test';
```

## Related Modules
### Swiftmailer
  * http://drupal.org/project/swiftmailer

