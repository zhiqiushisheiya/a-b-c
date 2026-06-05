library(tidyverse)
library(patchwork)
library(segmented)
setwd("C:/Users/22975/Desktop/Table1 and Table2")
df=read.csv("原始数据.csv",header = T)

dfx=df |> filter(measure=="Incidence") |> 
  filter(location=="Global") |> 
  filter(cause=="Diabetes mellitus type 2") |> 
  filter(age=="Age-standardized") |> 
  filter(metric=="Rate") |> 
  filter(sex%in% c("Male","Female"))

dfall=tibble()
for (ix in unique(dfx$sex)) {
  print(ix)
  df1=dfx %>% filter(sex==ix)
  lm_model <- glm(val ~ year, data = df1)
  segmented_model <- segmented(lm_model, seg.Z = ~ year, psi = c(1998,2006,2014))
  plot(segmented_model)
  AAPC_result <- aapc(segmented_model, parm = "year")
  AAPC_result=sprintf(paste0("%.",2, "f(%.",2, "f,%.",2, "f)"), 
                      AAPC_result[1], AAPC_result[3], AAPC_result[4]) 
  xa=data.frame(name=ix,AAPC=AAPC_result)
  print(xa)
  dfall=rbind(xa,dfall)
}
