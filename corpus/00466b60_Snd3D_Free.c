
/* sweep */

void Snd3D_Free(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = Snd3D_FindNode(param_1);
    if (iVar1 != 0) {
      List_Remove(param_1,(void **)&DAT_005897a4);
      Pool_Free((Pool *)&DAT_00589760,param_1);
    }
  }
  return;
}

