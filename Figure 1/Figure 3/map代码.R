library(tidyverse)
library(readxl)
library(tidyr)
library(rnaturalearth)
library(rnaturalearthdata)
library(sf)
library(mapdata)
library(showtext)
setwd("C:/Users/22975/Desktop/figure4")
load("GBD.Rdata")


font_add(family = "times_new_roman", regular = "C:/Windows/Fonts/times.ttf")
showtext_auto()
font_family <- "times_new_roman"
font_size <- 10

################################################################################################
df=read_excel("地图数据.xlsx",sheet=2)
dfplot= df %>% filter(location_id %in% namex$location_id) %>% 
  select(location_id,val) %>% left_join(.,namex)
color1 <- c("#fe0000","#f0e53e","#56b4e8","#019e73")

colorx1=color1


index="Prevalence"
ASR=dfplot %>%  select(location_id,location,val) %>% 
  mutate(val=val/1)
df_asr=left_join(df_world,ASR)



df_asr<- df_asr %>%
  mutate(val2 = cut(val, 
                    breaks = c(429.11,1433.68, 2101.43, 3180.37, 10681.95),
                    labels = c("429.11-1433.68", "1433.68-2101.43", 
                               "2101.43-3180.37", "3180.37-10681.95"),
                    include.lowest = TRUE,
                    right = TRUE))



ggplot(df_asr %>% na.omit()) +
  geom_sf(aes(geometry = geometry, fill =val2),size = 0.1)+
  #labs(title = paste0("Age-standardized ",index," Rate (Per 100,000),both sexes in 2021")) +
  scale_fill_manual(#name="IHD prevalence",
    values = rev(colorx1),
    guide = guide_legend(reverse=T))+
  guides(fill = guide_legend(ncol = 1, title = "IHD(Per 100,000) "))->p


p1=p+ theme(axis.text.x = element_blank(),
            axis.ticks.x = element_blank(),
            legend.position = c(0.13, 0.29),
            legend.background = element_blank(),
            legend.key = element_blank(),
            legend.key.size = unit(0.6, "lines"), 
            legend.spacing.y = unit(10, "pt"),
            legend.margin = margin(1, 1, 1, 1), 
            legend.title = element_text(size = font_size, family = font_family, face = "bold", color = "black"),
            legend.text = element_text(size = font_size, family = font_family, color = "black", margin = margin(t = 3, b = 3, unit = "pt")),
            panel.grid.major = element_blank(),
            panel.grid.minor = element_blank(),
            panel.border = element_blank(),
            panel.background = element_blank(),
            text = element_text(family = font_family, size = font_size))
p1




df=read_excel("地图数据.xlsx",sheet=3)
load("GBD.Rdata")

dfplot= df%>% filter(location_id %in% namex$location_id) %>% 
  select(location_id,val) %>% left_join(.,namex)
color1 <- c("#fe0000","#f0e53e","#56b4e8","#019e73")
colorx1=color1

index="Prevalence"
ASR=dfplot %>%  select(location_id,location,val) %>% 
  mutate(val=val/1)
df_asr=left_join(df_world,ASR)

df_asr<- df_asr %>%
  mutate(val2 = cut(val, 
                    breaks = c(307.03, 715.21, 1176.78, 1807.59, 7322.66),
                    labels = c("307.03-715.21", "715.21-1176.78", 
                               "1176.78-1807.59", "1807.59-7322.66"),
                    include.lowest = TRUE,
                    right = TRUE))

ggplot(df_asr %>% na.omit()) +
  geom_sf(aes(geometry = geometry, fill =val2),size = 0.1)+
  #labs(title = paste0("Age-standardized ",index," Rate (Per 100,000),both sexes in 2021")) +
  scale_fill_manual(#name="Diabetes mellitus prevalence",
    values = rev(colorx1),
    guide = guide_legend(reverse=T))+
  guides(fill = guide_legend(ncol = 1, title = "T2DM(Per 100,000) "))->p

p2=p+ theme(axis.text.x = element_blank(),
            axis.ticks.x = element_blank(),
            legend.position = c(0.13, 0.29),
            legend.background = element_blank(),
            legend.key = element_blank(),
            legend.key.size = unit(0.6, "lines"), 
            legend.spacing.y = unit(10, "pt"),
            legend.margin = margin(1, 1, 1, 1), 
            legend.title = element_text(size = font_size, family = font_family, face = "bold", color = "black"),
            legend.text = element_text(size = font_size, family = font_family, color = "black", margin = margin(t = 3, b = 3, unit = "pt")),
            panel.grid.major = element_blank(),
            panel.grid.minor = element_blank(),
            panel.border = element_blank(),
            panel.background = element_blank(),
            text = element_text(family = font_family, size = font_size))
p2





df=read_excel("地图数据.xlsx",sheet=4)
load("GBD.Rdata")


dfplot= df%>% filter(location_id %in% namex$location_id) %>% 
  select(location_id,val) %>% left_join(.,namex)
color2 <- c("#fe0000","#56b4e8","#019e73")
colorx2=color2

index="Prevalence"
ASR=dfplot %>%  select(location_id,location,val) %>% 
  mutate(val=val/1)
df_asr=left_join(df_world,ASR)

df_asr<- df_asr %>%
  mutate(val2 = cut(val, 
                    breaks = c(1,3, 5, 7),
                    labels = c("IHD dominant","T2DM dominant","Consistent"),
                    include.lowest = TRUE,
                    right = TRUE))

ggplot(df_asr %>% na.omit()) +
  geom_sf(aes(geometry = geometry, fill =val2),size = 0.1)+
  #labs(title = paste0("Age-standardized ",index," Rate (Per 100,000),both sexes in 2021")) +
  scale_fill_manual(#name="Diabetes mellitus prevalence",
    values = rev(colorx2),
    guide = guide_legend(reverse=T))+
  guides(fill = guide_legend(ncol = 1, title = ""))->p

p3=p+ theme(axis.text.x = element_blank(),
            axis.ticks.x = element_blank(),
            legend.position = c(0.13, 0.29),
            legend.background = element_blank(),
            legend.key = element_blank(),
            legend.key.size = unit(0.6, "lines"), 
            legend.spacing.y = unit(10, "pt"),
            legend.margin = margin(1, 1, 1, 1), 
            legend.title = element_text(size = font_size, family = font_family, face = "bold", color = "black"),
            legend.text = element_text(size = font_size, family = font_family, color = "black", margin = margin(t = 3, b = 3, unit = "pt")),
            panel.grid.major = element_blank(),
            panel.grid.minor = element_blank(),
            panel.border = element_blank(),
            panel.background = element_blank(),
            text = element_text(family = font_family, size = font_size))
p3