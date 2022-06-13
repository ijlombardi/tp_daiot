/*
 * pemkey.h
 *
 *  Created on: Jul 16, 2020
 *      Author: leopoldo
 */

#ifndef MAIN_PEMKEY_H_
#define MAIN_PEMKEY_H_

/*
 * Clave PRIVADA del dispositivo registrado en Google Cloud Platform - IotCore
 * https://cloud.google.com/iot/docs/how-tos/credentials/keys
 *
 * Crear claves publica y privada para cada dispositivo desde la consola de GCP con la herramienta OPENSSL
 * 
 * openssl req -x509 -nodes -newkey rsa:2048 -keyout rsa_lz_private.pem -out rsa_lz_cert.pem -subj "/CN=unused" -days 36500 
 *  
 * rsa_private.pem: The private key that must be securely stored on the device and used to sign the authentication JWT.
 * rsa_public.pem: The public key that must be stored in Cloud IoT Core and used to verify the signature of the authentication JWT.
 */

const char GCP_PEM_KEY[] =

"-----BEGIN PRIVATE KEY-----\n"
"MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQC74qLoeOt8JUoR\n"
"fjYMAMBB3+3VkBe8ySqO4dY77U8tXP2jBhMZ19JAa+Qq/HvuB2DaimJfXOtzTVoE\n"
"M/Fu+iQyIEe1q/+oof7jvAuJ4vtqD/lLbyQTFT/7piRMy7y9Z9TBbTLuWBg3BgzI\n"
"E4VlLJnhkaWhkIsIpgdUJrRXB6WwXWiSyQKbrWDvP7OYQp57t6lxe3iBay4dbx4r\n"
"Cf8V3jOj8f7RCefSXTGIitJ1A+Mp2a/XLsTnWJdCkS5YZESwEpX7Csgo9/gx/K3u\n"
"yUnroV2ZcJP3st//QV5JOgEIRXGrUHAktfbuFFymc3oHJa37E9a2noLNQaUE5zRi\n"
"zPySThBFAgMBAAECggEAQK0jpyL47SNo+9yWfktD42lSVdHkWfhlzgmv1bE7MEJy\n"
"jUvqB1tj5Qk+4g1IHAguLwy0EF/MLUTTV98JnUo+a4LxLHio6UPamkqBLlYUdc5J\n"
"4s2/fVIzVE088bKwpgK4Gl2cyq9IpqhOfhE6OjnAPwYEHjnDopaEr1MjgVIAl1T5\n"
"IkQlVSu8S7zm/EVIhp2qGgNyL/cp5kQTVGTpfQBz9JJb6xLE+/a1Gls1XizwEU0p\n"
"2F4KBAJrJuEHShD5ERntM9RmOi/ped6Kf2ksTlfzw9TM0SWNuaJwx05EQNoAEPRS\n"
"1XQtbicSmltih7plNBOBtn6UChlSelDkcIR4dHy0AQKBgQDlzblmwYgIn7C09o9a\n"
"1u2C4GwK3bKTwJ+TV4m/6NaezNnVWuprNBORYE1OQRK21SyTElhjYFUUsV7TDnHN\n"
"QqW3arnUPLjTmLTOvwWFQWrBhg9iwXJwdLq9qWUcraW6oTAjyEyLydbkF4POihUd\n"
"wHEvexyBR+GhitkQ+AfDpbIJuQKBgQDRTaALZ+6tvalKPPoEsFbaCupAZG6Yk3u7\n"
"7tKy/VkXUzXAL4LMs2XBXuLrxHAajs6TFVxYbRdPQvzRLVkxr0w1MYYJLnJNKEJg\n"
"HhyZjMCSUb08ZrOOx1jBjsaZYS4MP6L6jEOfCpbKPocgYMa0A4YVJP215LlhTVpo\n"
"ZNv/RJuQ7QKBgQC3ivCh2cFE4gbJAoTNEQzykzy4EQooaJkLnccvuFBy1TrG5a6F\n"
"oTpfyoL0FZVU4j6P2P8voClUNbZ+6/KI9spVDLEPitA0cKs41eka3XzexKxVPByj\n"
"JRhhk4JmvWq4/TTt33UD0VoJI57qv+7NrH66ZaIGv9q+o59rpi7NXPIuQQKBgBZb\n"
"3YH6a1PiE+ibVPYVRGHskpOoZuwjrS8pVxbJ26+TMwXBzY5Ch9c9ZK5dAMDFiqnJ\n"
"uWC03q2X8VwDJSkameCA1tm6PXmimFyeOt3oXFYFJ1sBeaMCBqg+sVaHPB0Q2z86\n"
"pqqhvfQC8/pwfCmUyskNd5DryyXq1oKaa6n8UUYNAoGAD1fvnAhx6M4qsyqxn3pl\n"
"H7swQIRdkw9mqpRO18X9o6Rn8O/KHZtIA4OC1vNNkVVns0JKNUdbl/qq7MR6A3o1\n"
"a/SsViGq9mJB7und7TL5DLxhC7/YOCYBUhuBNaspuz8rCpheEOtXG5bBdGM7ZxFy\n"
"Xsg1cHAU8opntJmB5QgCDRI=\n"
"-----END PRIVATE KEY-----\n";

#endif /* MAIN_PEMKEY_H_ */
