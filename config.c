
#ip
auto eth1
iface eth1 inet static

address 192.168.1.168
gateway 192.168.1.1
netmask 255.255.255.0
dns-nameserver 192.168.1.1
dns-search hc.net

#git
ssh-keygen -t rsa -C "nson7@sina.com"

git config --global color.ui true

git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
