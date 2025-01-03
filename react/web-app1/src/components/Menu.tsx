import Link from "next/link";

const Menu = () => {
    return (
        <aside>
            <Link href="/">Principal</Link>
            <Link href="/pagina1">Pagina 1</Link>
            <Link href="/pagina2">Pagina 2</Link>
        </aside>
    );
}

export default Menu;