# build.sh

# Prequisites:
# 	- gcc

#!/bin/bash

# printf better than echo ?
printf "\n"
printf "This is a .NET Project Initialisation shell script\n"
printf "\n"
printf "\n"

cd "$(dirname "$0")"

printf "Files in Current Dirtectory:"
printf "$(dirname "$0")"
printf "\n"

printf "\n"

ls

dotnet new console -o Prj_dotNET_Hello-World

printf "\n"
printf "End of shell script\n"
printf "\n"