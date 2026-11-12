
/* sweep: IMAGES/IMAGE */

void Mnu_LoadPcxImages(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int in_stack_00001680;
  
  __chkstk();
  iVar1 = Cbin_SelectGroup();
  if (iVar1 != 0) {
    iVar1 = Cbin_IterField_Global();
    while (iVar1 != 0) {
      puVar3 = (undefined4 *)register0x00000010;
      for (iVar1 = 0x5a3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      pcVar2 = (char *)_strtok();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00000000,pcVar2,0x3f);
      }
      pcVar2 = (char *)_strtok();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00000040,pcVar2,0xf);
      }
      pcVar2 = (char *)_strtok();
      if (pcVar2 != (char *)0x0) {
        _strncpy(&stack0x00001654,pcVar2,0xf);
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        _atoi();
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        in_stack_00001680 = _atoi();
      }
      if (in_stack_00001680 == 0) {
        in_stack_00001680 = 1;
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        _atoi();
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        _atoi();
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        _atoi();
      }
      iVar1 = _strtok();
      if (iVar1 != 0) {
        _atoi();
      }
      MnuImage_Add();
      iVar1 = Cbin_IterField_Global();
    }
  }
  return;
}

