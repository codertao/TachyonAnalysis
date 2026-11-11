
/* wraps a string in a fake FILE (flag 0x49) and calls Crt_Input */

void Crt_sscanf(char *param_1,undefined4 param_2)

{
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  Crt_Input(&local_24,param_2,&stack0x0000000c);
  return;
}

