
void FUN_00478350(int param_1)

{
  char *pcVar1;
  
  for (pcVar1 = s_IAInvKey1_00550668; (param_1 = param_1 + -1, param_1 != 0 && (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 0x84) {
  }
  if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x80) != 0)) {
    *(undefined4 *)(*(int *)(pcVar1 + 0x80) + 0x84) = 1;
    FUN_004783a0(*(int *)(pcVar1 + 0x80) + 0x30,*(int *)(pcVar1 + 0x80) + 0x50);
  }
  return;
}

