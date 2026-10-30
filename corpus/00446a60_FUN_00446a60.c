
void FUN_00446a60(char *param_1)

{
  char *pcVar1;
  float fVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x8c);
      *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x90) + fVar2;
      if (*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x90) + fVar2) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
      }
    }
    pcVar1 = param_1 + 0xac;
    param_1 = param_1 + 0xac;
    cVar3 = *pcVar1;
  }
  return;
}

