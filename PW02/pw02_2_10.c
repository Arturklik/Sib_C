#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int id_raw;
    unsigned int status_raw;
    float voltage;

    scanf("%x %o %f", &id_raw, &status_raw, &voltage);

    int packet_id = (int)id_raw;
    uint8_t status = (uint8_t)status_raw;
    uint16_t checksum = (uint16_t)(packet_id + status);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
