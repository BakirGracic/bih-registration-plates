## Registration Plates of Bosnia and Herzegovina

This project contains all possible variations from 3 types of registration plates in Bosnia and Herzegovina
Project includes C++ code, executable (shell, .exe) & text files

### Regular plates

- Format: `X00-X-000`
- 9 characters per plate
- `X` is one of letters: `A, E, O, J, K, M, T`
- `00` or `000` is a number from 0-99 or 0-999
- `-` (dash) is a syntax character
- 4.900.000 combinations
- regex pattern: `^[AEOJKMT][0-9]{2}-[AEOJKMT]-[0-9]{3}$`

### Taxi plates

- Format: `TA-000000`
- 9 characters per plate
- `TA` are syntax characters
- `000000` is a number from 0-999999
- `-` (dash) is a syntax character
- 1.000.000 combinations
- regex pattern: `^TA-[0-9]{6}$`

### Diplomatic plates

- Format: `CC-X-000` or `CCCC-X-000`
- 8 or 10 characters per plate
- CC or CCCC are [diplomatic codes](https://en.wikipedia.org/wiki/Vehicle_registration_plates_of_Bosnia_and_Herzegovina#Diplomatic,_consular_and_foreign_mission_plate_prefixes)
- `X` is one of letters: `A, C, M, E`
- `000` is a number from 0-999
- `-` (dash) is a syntax character
- 368.000 combinations
- ~2.8mb .txt file
- regex pattern for `CC-X-000` format: `^[A-Z]{2}-[ACME]-[0-9]{3}$`
- regex pattern for `CCCC-X-000` format: `^[A-Z]{4}-[ACME]-[0-9]{3}$`

### Disclaimer

I am not responsible for malicious use of this information and the consequences.
I hope this information helps you in any way!
