
void FUN_0048e720(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  if (((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return;
  }
  FUN_0052db6a(local_18,*param_1,param_1[1],param_1[2]);
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&DAT_00559d10,local_24);
  FUN_004b24d0(&DAT_00559d20,local_30);
  FUN_0052db6a(local_18,*param_2,param_2[1],param_2[2]);
  FUN_0052dbcd(local_18);
  FUN_004b24d0(local_24,local_24);
  FUN_004b24d0(local_30,local_30);
  FUN_004e071b(local_24,local_30,param_3);
  return;
}

