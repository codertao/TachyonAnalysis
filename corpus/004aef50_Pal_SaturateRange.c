
/* sweep */

void Pal_SaturateRange(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = param_3;
  puVar2 = param_2;
  puVar1 = param_1;
  param_1 = (uint *)CONCAT31(param_1._1_3_,(char)*param_1);
  param_2 = (uint *)CONCAT31(param_2._1_3_,(char)*param_2);
  param_3 = (uint *)CONCAT31(param_3._1_3_,(char)*param_3);
  Pal_SaturateColor(&param_1,&param_2,&param_3);
  *puVar1 = (uint)param_1 & 0xff;
  *puVar2 = (uint)param_2 & 0xff;
  *puVar3 = (uint)param_3 & 0xff;
  return;
}

