
void FUN_0045c010(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x28);
  if ((((*(byte *)(param_1 + 0x34) & 0x10) == 0) && (*(int *)(iVar1 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar1,5,1);
  }
  if ((*(int *)(iVar1 + 0x8c) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar1,6,1);
  }
  return;
}

