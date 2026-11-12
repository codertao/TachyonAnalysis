
/* sweep: counts "%s_FRAME_%02d" groups */

int Anim_CountFrames(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  iVar2 = 0;
  while( true ) {
    str_sprintf(local_80,s__s_FRAME__02d_00532798,param_1,iVar2);
    iVar1 = Cbin_SelectGroup(local_80);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

