call plug#begin() "installing plugins
Plug 'junegunn/vim-plug'
Plug 'puremourning/vimspector'
Plug 'Valloric/YouCompleteMe'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
Plug 'jiangmiao/auto-pairs'
Plug 'tpope/vim-fugitive'
Plug 'airblade/vim-gitgutter'
Plug 'vim-scripts/DoxygenToolkit.vim' "c, c++, Python
Plug 'puremourning/vimspector'
call plug#end()
set number "line numbers
set hls "search highlighting
set is "ignore case
set incsearch "first match highlighting
syntax on "code highlighting
map <C-n> :NERDTreeToggle<CR>
"mapping Ctrl-n to run nerdtree
let g:vimspector_enable_mappings='HUMAN' "hot keys"
set mouse=a
