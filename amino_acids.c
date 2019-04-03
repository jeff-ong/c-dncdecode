

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const char *dna_data[64][2] = {
        {"TCA", "S"},
        {"TCC", "S"},
        {"TCG", "S"},
        {"TCT", "S"},
        {"TTC", "F"},
        {"TTT", "F"},
        {"TTA", "L"},
        {"TTG", "L"},
        {"TAC", "Y"},
        {"TAT", "Y"},
        {"TAA", "*"},
        {"TAG", "*"},
        {"TGC", "C"},
        {"TGT", "C"},
        {"TGA", "*"},
        {"TGG", "W"},
        {"CTA", "L"},
        {"CTC", "L"},
        {"CTG", "L"},
        {"CTT", "L"},
        {"CCA", "P"},
        {"CCC", "P"},
        {"CCG", "P"},
        {"CCT", "P"},
        {"CAC", "H"},
        {"CAT", "H"},
        {"CAA", "Q"},
        {"CAG", "Q"},
        {"CGA", "R"},
        {"CGC", "R"},
        {"CGG", "R"},
        {"CGT", "R"},
        {"ATA", "I"},
        {"ATC", "I"},
        {"ATT", "I"},
        {"ATG", "M"},
        {"ACA", "T"},
        {"ACC", "T"},
        {"ACG", "T"},
        {"ACT", "T"},
        {"AAC", "N"},
        {"AAT", "N"},
        {"AAA", "K"},
        {"AAG", "K"},
        {"AGC", "S"},
        {"AGT", "S"},
        {"AGA", "R"},
        {"AGG", "R"},
        {"GTA", "V"},
        {"GTC", "V"},
        {"GTG", "V"},
        {"GTT", "V"},
        {"GCA", "A"},
        {"GCC", "A"},
        {"GCG", "A"},
        {"GCT", "A"},
        {"GAC", "D"},
        {"GAT", "D"},
        {"GAA", "E"},
        {"GAG", "E"},
        {"GGA", "G"},
        {"GGC", "G"},
        {"GGG", "G"},
        {"GGT", "G"}
    };
    char ch;
    char dna_arr[4];
    char strnstr[100];
    scanf("%s", strnstr);

    // FILE *file_input = fopen(argv[1], "r");

    int count_dna_arr = 0;
    int count_letters_processed = 0;
    int count_amino_acid = 0;
   
    // while ((ch = fgetc(file_input)) != EOF)
    for (int j = 0; j < strlen(strnstr); j++)
    {
        count_letters_processed++;
        if (count_dna_arr < 3) {
            dna_arr[count_dna_arr] = strnstr[j];
            if (count_dna_arr + 1 == 3) {
                dna_arr[count_dna_arr+1] = '\0';
                count_dna_arr = 0;
                for (int i = 0; i <= 64; i++) {
                    int ret = strncmp(dna_arr, dna_data[i][0], 4);
                    if (ret == 0){
                        printf("%s", dna_data[i][1]);
                        count_amino_acid++;
                        break;
                    }
                }
            } else {
                count_dna_arr++;
            }
        }
    }
    printf("%s", "\n");
    printf("%s", "Total number letters processed: ");
    printf("%d", count_letters_processed);
    printf("%s", "\n");
    printf("%s", "Total number of amino acids decoded: ");
    printf("%d", count_amino_acid);
    printf("%s", "\n");
    // fclose(file_input);

    return 0;
}
