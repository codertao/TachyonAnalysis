
/* sweep: guess */

void Ent_ClearTargetedBy(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = **(int **)(param_1 + 100);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x8c) == 0) {
      iVar3 = *(int *)(iVar1 + 0x90);
joined_r0x0048b36e:
      if (iVar3 == param_1) {
        *(undefined4 *)(iVar1 + 0x90) = 0;
      }
    }
    else {
      pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c);
      if (pcVar2 == (code *)0x0) {
        iVar3 = *(int *)(iVar1 + 0x90);
        goto joined_r0x0048b36e;
      }
      (*pcVar2)(iVar1,3,param_1);
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}

