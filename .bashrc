#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
alias cf='vim ~/.config/niri/config.kdl'
alias tcf='vim ~/.config/kitty/kitty.conf'
PS1='[\u@\h \W]\$ '
eval "$(starship init bash)"
